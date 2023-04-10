import pyjokes


def tell_some_jokes():
    print("Hey! Do you want to listen some jokes ?")
    response = input()

    if response.lower() == "yes":
        joke = pyjokes.get_joke(language="en", category="all")
        print(joke)

        while True:
            print("Would you like to hear another joke ?")
            response = input()

            if response.lower() == "yes":
                joke = pyjokes.get_joke(language="en", category="all")
                print(joke)
            elif response.lower() == "no":
                return

    elif response.lower() == "no":
        return


tell_some_jokes()
