using System;

namespace FirstConsole
{
    internal class PropertiesLesson
    {
        public event Action OnDie = () => Console.WriteLine("OnDie");
        string name = string.Empty;
        int age = 10;
        int life = 0;

        //Fields
        /// <summary>
        /// Setter : check is null/empty
        /// Getter : 
        /// </summary>
        public string Name
        {
            get
            {
                return name;
            }
            protected set
            {
                if (string.IsNullOrEmpty(value))
                    name = "Invalid";
                else
                    name = value;
                //instance.Name = "test";
            }
        }

        public int Age => age;
        public virtual int Life
        {
            get => life;
            set
            {
                life = value < 0 ? 1 : value > 100 ? 100 : value;
                if (life == 0)
                    OnDie?.Invoke();
            }
        }

        public PropertiesLesson()
        {
            OnDie += Die;
        }

        public int Mana 
        { 
            get;
            private set; 
        } = 50;

        void Die() => Console.WriteLine("Dead");
    }

    internal class Ex : PropertiesLesson
    {
        public override int Life { get => base.Life; set => base.Life = value; }
        public Ex()
        {
            Name = "";
            Console.WriteLine(Name);
            Console.WriteLine(Age);

            Life = 200;
            Console.WriteLine(Life);
            Life = -100;
            Console.WriteLine(Life);
            Life = 0;
        }
    }
}
