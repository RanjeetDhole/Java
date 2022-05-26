import java.lang.*;

class Mythread6
{
    public static  void main(String a[]) throws Exception
    {
        Demo obj1 = new Demo();
        Thread t1 = new Thread(obj1,"First");  //New state

        Demo obj2 = new Demo();
        Thread t2 = new Thread(obj2,"Second");  //New state

        t1.start();  //Runable state

        t1.join();


        t2.start();  ////Runable state


    }
}

class Demo extends Thread
{
    public void run()
    {
        for(int i =0 ; i < 10;i++)
        {

            System.out.println("Value of i : "+i);
            try
            {
                Thread.sleep(1000);
            }
            catch(Exception obj)
            {}
        }

    }

}
