using System;
using System.Timers;
using ExoRPG.Map;
using ExoRPG.Element;

namespace ExoRPG
{
    /// <summary>
    /// A rpg game
    /// grid: the Grid of game
    /// entities: Entity of the game (0 = player)
    /// </summary>
    internal class RPG
    {
        public static event Action onTick = null;
        Timer tick = new Timer();
        public Grid grid { get; set; } = null;
        public Entity[] entities { get; set; } = null;

        public RPG() 
        {
            entities = new Entity[] {
                new Player(),
                new Enemy(),
                new Enemy(),
                new Enemy(),
                new Enemy(),
                new Enemy(),
                new Chest(),
                new Chest(),
                new Chest()
            };
            grid = new Grid(10,10, entities);

			tick.Interval = 100;
            tick.Elapsed += (o, e) =>
            {
                TickGame();
                onTick?.Invoke();
            };
            tick.Start();
        }

        void TickGame()
        {
            Console.Clear();
            if (!grid.IsPlayerAtEnd)
                grid.ShowGrid();
            else
            {
                tick.Stop();
                Console.WriteLine("You Win !");
            }
        }
    }
}
