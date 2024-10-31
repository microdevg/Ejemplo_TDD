# Proyecto de Driver para LEDs Virtuales usando TDD

Este repositorio contiene una base de código desarrollada aplicando TDD (Desarrollo Dirigido por Pruebas) para crear un driver que controla un puerto de LEDs virtuales. El objetivo es proporcionar un ejemplo práctico de cómo implementar un controlador de hardware simulado, permitiendo encender y apagar LEDs en posiciones específicas, y verificar su correcto funcionamiento mediante pruebas automatizadas.

## Prerrequisitos

Antes de comenzar, asegúrate de tener Docker instalado en tu sistema. Puedes descargarlo desde [aquí](https://www.docker.com/get-started).

## Ejecución de Pruebas

Para ejecutar las pruebas, sigue estos pasos:

1. Clona el repositorio y accede al directorio del proyecto:

```bash
    git clone <URL-del-repositorio>
    cd <nombre-del-repositorio>
```

2. Iniciar el contenedor de Docker y correr las pruebas:
```bash
    # Inicio el contenedor docker
    docker run -it --rm -v ${PWD}:/home/dev/project throwtheswitch/madsciencelab
```
3.  Dentro del contenedor, ejecuta todas las pruebas con:

```bash 
    ceedling test:all
```