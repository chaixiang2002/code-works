from turtle import*
s=input("请输入性别:  ")
setup(600,400)
if s=="男":


   fillcolor("blue")
   begin_fill()
   fd(120)
   left(90)
   fd(30)
   right(135)
   fd(65)
   right(90)
   fd(65)
   right(135)
   fd(30)
   left(90)
   fd(120)
   right(90)
   fd(30)
   end_fill()
   penup()
   goto(0,100)
   write("男生请在右侧排队!",align="left",font=("宋体",20,"normal"))



if s=="女":


   fillcolor("pink")
   begin_fill()
   left(180)
   fd(120)
   right(90)
   fd(30)
   left(135)
   fd(65)
   left(90)
   fd(65)
   left(135)
   fd(30)
   right(90)
   fd(120)
   left(90)
   fd(120)
   left(90)
   fd(30)
   end_fill()
   penup()
   goto(0,100)
   write("女生请在左侧排队!",align="left",font=("宋体",20,"normal"))
   exitonclick()