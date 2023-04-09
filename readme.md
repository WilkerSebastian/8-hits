<img src="./hits.png">
<br>
<br>
8hits é uma biblioteca C++, que desenvolvi para usar em projetos de retrô games e também para uso em sistemas embarcados como arduino.

## Requisitos

para compilar essa versão é necessario ter instalado o
GNU/make e clang++ 12 ou superior.

## Instalação

clone o repositorio

```bash
git clone https://github.com/WilkerSebastian/8-hits
```

entre no diretorio do projeto
```bash
cd ./8-hits
```

execute o comando make para compilar o código usando clnag++

```bash
make
```

para testar execute o binario
```bash
./bin/hits
```

### Como usar

você pode compilar como biblioteca para seu sistema ou copiar para pasta o seu projeto.

#### Uso básico

```C++

    #include <iostream>
    #include <Hits>

    int main() {

        std::cout << "Tocando a nota C#" << "\n";

        Hits hits; // cria um objeto que vai ser o player de audio

        Track track("sample") // cria uma track

        track.addNote("C#", 1000) // adiciona uma nota a track e o tempo que vai ser tocada no caso 1 segundo

        hits.addTrack(track); // adiciona a track ao player

        hits.play("sample") // toca a track referida com identificador sample

        return 0;

    }

```