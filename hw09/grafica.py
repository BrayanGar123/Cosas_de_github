import matplotlib.pyplot as plt
import numpy as np


datos= np.loadtxt("respuesta.txt")
Y= datos


l=np.where(Y>0)
y1=Y[l]
k=0.01
j=len(y1)
t=np.linspace(0,j*k,j+1)
t=t[:-1]
plt.figure(figsize=(8,8))
plt.xlabel("Tiempo") 
plt.ylabel("Altura")
plt.scatter(t,y1,c="r")
plt.title("Parabola")

plt.savefig("grafica.pdf")