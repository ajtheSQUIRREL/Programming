import requests
import json
from geopy.geocoders import Nominatim


def weather_data():
    loc = Nominatim(user_agent="GetLoc")
    print("Enter Your Location : ", end=" ")
    location = input()

    getLoc = loc.geocode(location)
    try:
        Latitude = getLoc.latitude
        Longitude = getLoc.longitude

        api_url = f"https://api.openweathermap.org/data/2.5/weather?lat={Latitude}&lon={Longitude}&appid=0808cc46602552cbb0af4b76347b4da7"

        response = requests.get(api_url)
        content = response.content.decode("utf-8")
        dict_content = json.loads(content)
        temperature = dict_content["main"]["temp"] - 273.16
        print("Weather Update :")
        print(f'Country        : {dict_content["sys"]["country"]}')
        print(f"Place          : {location.capitalize()}")
        print(f"Temperature    : {round(temperature,2)} Degree Celsius")
        print(
            f'Condition      : {dict_content["weather"][0]["description"].capitalize()}'
        )
        print(f'Humidity       : {dict_content["main"]["humidity"]}%')

    except:
        print("Sorry,You Entered Wrong Location.")


weather_data()
