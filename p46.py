import tkinker as tk
window=tk.Tk()
def click():
    print("Hello cse7 students")
button=tk.Button(window,text="click me",command=click)
button.pack()
window.mainloop()  