def display_book(filename):
    with open(filename, "r") as file:
        book_content = file.read()

    pages = book_content.split("--")
    total_pages = len(pages)
    current_page = 0

    while current_page < total_pages:
        page = pages[current_page].strip()
        print(page)

        user_input = input(
            "[enter - read more, [number] - skip pages, -1 - previous page, q - quit]: "
        )

        if user_input.lower() == "q":
            break
        elif user_input.isdigit():
            skip_pages = int(user_input)
            current_page = min(max(current_page + skip_pages, 0), total_pages - 1)
        elif user_input == "-1":
            current_page = max(current_page - 1, 0)
        else:
            current_page += 1


file_name = "D:\Programming\Python\Phitron\Theory Mid Term Exam\File.txt"
display_book(file_name)
