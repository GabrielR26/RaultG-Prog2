using System;

namespace ExoMacDonald
{
    internal class Order
    {
        //Event
        public static event Action OnStartDelivery = () => Console.WriteLine($"\n### OnStartDelivery ###");
        public static event Action OnEndDelivery = () => Console.WriteLine($"\n### OnEndDelivery ###");
        //Var
        Product product = null; 
        CustomTimer timer = null;

        public Order(Product _product)
        {
            product = _product;
            CustomTimer.OnDelayTimer += DisplayDelivery;
            CustomTimer.OnEndTimer += EndDelivery;
            BeginDelivery();
        }

        void BeginDelivery()
        {
            OnStartDelivery?.Invoke();
            timer = new CustomTimer(product.DeliveryTime());
        }

        void DisplayDelivery(int _delay)
        {
            Console.Clear();
            Console.WriteLine($"==> Time delivery : {_delay} on {product.DeliveryTime()} sec");
        }

        void EndDelivery()
        {
            Console.WriteLine($"==> Your order is here : {product.Name()}");
            Console.Read();
            OnEndDelivery?.Invoke();
        }
    }
}
