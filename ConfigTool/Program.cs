using System;


namespace AirFramework.ConfigTool
{
    public class ConfigToolProgram
    {


        public static void Main(string[] args)
        {
            FileStream file = new FileStream("ConfigTool.data",FileMode.OpenOrCreate,FileAccess.ReadWrite);

            Console.WriteLine("------------------AirFramework Config Tool------------------------------------------");


            Console.ReadLine();
        }
    }
}