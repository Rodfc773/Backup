key = None
key_and_values = dict()
while True:
    key = input("Digite uma key:")

    if key == 'Done' or key == 'done':
        break
    else:
        key_and_values[key] = input("digite um numero:")

while True:
    rkey = input("digite uma chave para resgatar seu valor:")
    if rkey =='Done' or rkey == 'done':
        break
    else:
        try:
            print("O valor da chave {", rkey, '} é esse {', key_and_values[rkey],'}')
        except:
            print("A chave não existe")