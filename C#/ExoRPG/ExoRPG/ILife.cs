using System;

namespace ExoRPG
{
    internal interface ILife
    {
        int Life { get; set; }

        void AddLife(int _add);
        /// <summary>
        /// Return if life <= 0
        /// </summary>
        /// <param name="_remove"></param>
        /// <returns></returns>
        bool RemoveLife(int _remove);
    }
}
