import csv

with open("favourites.csv","r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        fav = row["name"]
        name,email = 0,0
        # print(fav)
        if fav == "Shalom Hosheya":
            name +=1
        elif fav == "shalom@example.com":
            email +=1
    print(f"same name {name}")
    print(f"same email {email}")