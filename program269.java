import java.util.*;

class Program269
{
   public static void main(String Ar[])
   {
      Scanner sobj = new Scanner(System.in);

      

      System.out.println("please enter full name : ");
      String str = sobj.nextLine();

      for(int i = 0; i < str.length(); i++)
      {
         System.out.println(str.charAt(i));
      }
   }

}