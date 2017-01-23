using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Hospital
{
    class Hospital
    {
        static void Main(string[] args)
        {
            int allDays = int.Parse(Console.ReadLine());

            int untreatedPatients = 0;
            int tratedPatient = 0;
            int doctors = 7;

            for (int day = 1; day <= allDays; day++)
            {
                int countPatient = int.Parse(Console.ReadLine());

                if ((day % 3 == 0) && untreatedPatients > tratedPatient)
                {
                    doctors++;
                }
                if (countPatient > doctors)
                {
                    tratedPatient += doctors;
                    untreatedPatients += countPatient - doctors;
                }
                else
                {
                    tratedPatient += countPatient;
                }

            }

            Console.WriteLine("Trated Patients: {0}.", tratedPatient);
            Console.WriteLine("Untrated Patents: {0}.", untreatedPatients);
        }
    }
}
