def center_align_lines(file_path):
    try:
        with open(file_path, "r") as file:
            lines = file.readlines()
        for i in lines:
            print(i.center(150))
    except FileNotFoundError:
        print("File not found.")


input_file_path = r"D:\Programming\Python\Phitron\Theory Mid Term Exam\newfile.txt"
center_align_lines(input_file_path)
