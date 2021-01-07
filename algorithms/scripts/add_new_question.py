def make_response():
    output = ""
    question_number = input("Enter the question number: ")
    link_to_question = input("Enter the question link: ")
    question_statement = input("Enter the question statement: ")
    diff = input("Enter question difficulty: ")
    folder = input("Enter folder name: ")
    difficulty = diff.capitalize()
    file_name = input("Enter file name: ")
    output = f"[{question_number}]({link_to_question}) | [{question_statement}](leetcode/{diff}/{folder})| {difficulty}| [Python](leetcode/{diff}/{folder}/{file_name}.py), [C++](leetcode/{diff}/{folder}/{file_name}.cpp), [Golang](leetcode/{diff}/{folder}/{file_name}.go), [Kotlin](leetcode/{diff}/{folder}/{file_name}.kt)|"
    return output


def main():
    answer = make_response()
    print("Here you go!")
    print(answer)

if __name__ == "__main__":
    main()