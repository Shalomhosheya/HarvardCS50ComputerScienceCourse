import csv

with open("favourites.csv","r") as file:
    reader = csv.DictReader(file)
    count = {}
    # for row in reader:
    #     fav = row["name"]
    #     name,email = 0,0
    #     # print(fav)
    #     if fav == "Shalom Hosheya":
    #         name +=1
    #     elif fav == "shalom@example.com":
    #         email +=1
    
    # print(f"same name {name}")
    # print(f"same email {email}")
    def get_value(name):
        return count[name]
    
    for row in reader:
        fav = row["name"]
        if fav in count:
            count[fav] +=1
        else:
            count[fav] = 1
    for fav in sorted(count,key=lambda fav:count[fav],reverse=True):
        print(f"{fav} : {count[fav]}")