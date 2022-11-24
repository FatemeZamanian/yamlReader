import yaml

with open("Fruits.yaml", "r") as stream:
    try:
        print(yaml.safe_load(stream))
    except yaml.YAMLError as exc:
        print(exc)


print('\n \nOther way:\n \n')        

f=open('Fruits.yaml','r')
w=f.read().split('\n')
for x in w:
    x=x.split('#')
    print(x[0])