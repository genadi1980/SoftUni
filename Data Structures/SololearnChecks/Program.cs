﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SololearnChecks
{
    class Program
    {
        public static void Print(string s)
        {
            if (s.Length <= 1)
            {
                Console.Write(s);
            }
            else
            {
                for (int i = 0; i < s.Length; i++)
                {
                    string a = s.Substring(i + 1);
                    string b = s.Substring(0, i);
                    Print(a + b);
                }
            }
        }
        public static void Main(string[] args)
        {
            Print("cat");
        }
    }
}
