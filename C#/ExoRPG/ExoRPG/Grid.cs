using System;
using ExoRPG.Element;

namespace ExoRPG.Map
{
	/// <summary>
	/// A gris of Case with a start and exit
	/// </summary>
	internal class Grid
	{
		Player currentPlayer = null;
		Random random = new Random();
		public bool IsPlayerAtEnd { get; private set; }
		public int width { get; set; } = 0;
		public int height { get; set; } = 0;
		public Case[,] cases { get; set; } = null;

		public Grid(int _width, int _height, Entity[] _entities)
		{
			width = _width;
			height = _height;
			currentPlayer = (Player)_entities[0];
			cases = new Case[width, height];			
			InitGrid(_entities);
			currentPlayer.OnMouvePlayer += MouvePlayer;
		}
		public Grid(Case[,] _cases)
		{
			cases = _cases;
		}

		/// <summary>
		/// Init start, exit and entities of the grid
		/// </summary>
		void InitGrid(Entity[] _entities)
		{
            for (int i = 0; i < width; i++)
                for (int j = 0; j < height; j++)
                    cases[i, j] = new Case();

            Case _start = GetEmptyCase();
			_start.State = 1;
			_start.Entity = currentPlayer;			
			Case _end = GetEmptyCase();
			_end.State = 2;

			for (int i = 1; i < _entities.Length; i++)
			{
				Case _case = GetEmptyCase();
				_case.Entity = _entities[i];
			}
		}

		/// <summary>
		/// Show the grid on console
		/// </summary>
		public void ShowGrid()
		{
			Console.WriteLine(" The Grid \n");
			for (int i = 0; i < height; i++)
				for (int j = 0; j < width; j++)
					Console.Write($"[{(cases[i, j].Entity == null ? cases[i, j].ToString() : cases[i, j].Entity.ToString())}]" + (j == height - 1 ? "\n" : ""));
		}

		/// <summary>
		/// Get a case in grid without entity
		/// </summary>
		/// <returns> a case </returns>
		Case GetEmptyCase()
		{			
			int _r = 0, _i = 0, _j = 0;
			do
			{
				_r = random.Next(width * height);
				_i = _r / height;
				_j = _r % height;
			} while (cases[_i, _j].Entity != null && cases[_i, _j].State != 0);

			return cases[_i, _j];
		}

		/// <summary>
		/// Grosse merde
		/// </summary>
		/// <param name="_direction"></param>
		void MouvePlayer(int _direction)
		{
			int _mouve = 0;
			switch (_direction)
			{
				case 0:
					_mouve = -height;
					break;
				case 1:
					_mouve = height;
					break;
				case 2:
					_mouve = -1;
					break;
				case 3:
					_mouve = 1;
					break;
				default:
					break;
			}

			int _i = 0, _j = 0, _loc = 0;
			for (int i = 0; i < width; i++)
				for (int j = 0; j < height; j++)
					if (cases[i, j].Entity == currentPlayer)
					{
						_i = i;
						_j = j;
						_loc = (i * height) + j;
						break;
					}

			if (_loc + _mouve < 0 || _loc + _mouve >= width * height)
				return;
			if (cases[(_loc + _mouve) / height, (_loc + _mouve) % height].State == 2)
				IsPlayerAtEnd = true;

            //if (cases[(_loc + _mouve) / height, (_loc + _mouve) % height].Entity == )

                cases[_i, _j].Entity = null;
			cases[(_loc + _mouve) / height, (_loc + _mouve) % height].Entity = currentPlayer;
		}

		public static bool operator !(Grid _grid) => _grid == null;
    }
}
