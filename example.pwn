stock StartAircraft()
{
        static
                obj,
                Float:x,
                Float:y,
                Float:z,
                Float:a,
                Float:x_m,
                Float:y_m;

        //Узнаем все необходимые значения
        GetDirectionOfAircraft(a, x, y, z, x_m, y_m, 180.0);

        //Создаем объект
        obj = CreateObject(1681, x, y, z, 0.0, 0.0, a);

        //Направляем его к конечной точке
        MoveObject(obj, x_m, y_m, z, 200.00, 0.0, 0.0, a);
        
        return 1;
}
