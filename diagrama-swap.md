## Flujo: Abrir programa pesado con RAM al 90%

```
┌─────────────────────────────────────────────────────────────┐
│     Usuario intenta abrir programa pesado (RAM: 90%)        │
└────────────────────┬────────────────────────────────────────┘
                     │
                     ▼
        ┌────────────────────────────┐
        │ SO verifica RAM disponible │
        │ *(solo 10% libre)*         │
        └────────────┬───────────────┘
                     │
                     ▼
        ┌────────────────────────────┐
        │ Activa paginación/swap     │
        │ *(traslada datos a disco)* │
        └────────────┬───────────────┘
                     │
                     ▼
        ┌────────────────────────────┐
        │ Programa se carga lento    │
        │ *(disco es más lento)*     │
        └────────────┬───────────────┘
                     │
                     ▼
        ┌────────────────────────────┐
        │ Sistema se ralentiza       │
        │ *(thrashing)*              │
        └────────────────────────────┘
```

### Explicación

1. **Detección:** El SO detecta que solo hay cerca de 10% de RAM libre y no puede cargar el programa completamente en memoria.

2. **Paginación:** Activa el mecanismo de swap, moviendo datos menos usados de RAM al disco duro para liberar espacio.

3. **Carga lenta:** El programa se carga, pero parte de sus datos están en disco, lo que ralentiza el acceso (disco es 100-1000x más lento que RAM).

4. **Thrashing:** Si el programa necesita acceder frecuentemente a datos en swap, el sistema entra en *thrashing*: constantemente mueve datos entre RAM y disco.

5. **Resultado:** La experiencia es muy lenta; el sistema puede volverse casi inutilizable hasta que se libere RAM cerrando otras aplicaciones.