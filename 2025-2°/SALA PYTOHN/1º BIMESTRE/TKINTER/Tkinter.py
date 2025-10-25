#importação da biblioteca
import tkinter as tk
#função que será chamada ao clicar no botão
def mostrar_mensagem():
    mensagem_label.config(text="Olá, Usuário seja muito bem vindo a minha primeira tkinter \n")

# ciar a janela principal
janela = tk.Tk()
janela.title("Exemplo Tkinter") #definindo título da janela

#criar um rotulo (label) para exibir texto
mensagem_label = tk.Label(janela,text="Clique no botao para exibir uma mensagem" )
mensagem_label.pack(padx=20, pady=20) # posiciona os textos da janela

#cria um botao dentro da janela
botao = tk.Button(janela,text="Clique aqui",command=mostrar_mensagem)
botao.pack()

#inicia o looping de eventos 
janela.mainloop()