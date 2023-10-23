using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExoGamePrice_Corr
{
    public class Utils
    {
        public static float GetEurosFromDollars(float _dollars) => _dollars * 0.95f;
        public static string GetEurosFromDollarsToString(float _dollars) => $"{GetEurosFromDollars(_dollars).ToString("0.00")} €";
    }
}
