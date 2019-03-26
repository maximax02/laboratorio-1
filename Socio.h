#infdef SOCIO
#define SOCIO
#include "DtFecha.h"


class Socio{
    private:
        string ci;
        string nombre;
        DtFecha fechaIngreso;
    public:
        Socio();
        Socio(string, string, DtFecha);
        void setCI(string);
        string getCI();
        void setNombre(string);
        string getNombre();
        void setFechaIngreso(DtFecha);
        string getFechaIngreso();
        ~Socio();
};

#endif