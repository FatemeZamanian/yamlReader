import yaml

fl=input("Give me path and name of your yaml file : ")

with open(fl, "r") as stream:
    try:
        print(yaml.safe_load(stream))
    except yaml.YAMLError as exc:
        print(exc)


print('\n \nOther way:\n \n')        

f=open(fl,'r')
w=f.read().split('\n')
for x in w:
    x=x.split('#')
    print(x[0])