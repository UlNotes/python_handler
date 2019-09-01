def main(*arg):
    print("Welcome to talk.py");
    print("You have", len(arg), "message(s):")
    for i in range(0, len(arg)):
        print(arg[i])
