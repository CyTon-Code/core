# обьекты игры
## [явные обьекты](tangible.hpp)
- [существа](essence.hpp)
- - [человек](man.hpp)
- [блоки](block.hpp)
- - [рюкзак](backpuck.hpp)
- - [щит](shield.hpp)
- - [шлем](helmet.hpp)
- - [сумка](backpuck.hpp)
- - [карман](pocket.hpp)
- - [сундук](chest.hpp)
- Все обьекты которые можно видеть на карте 
## [не явные обьекты](not__tangible.hpp)
- [слоты](slot.hpp)
- - [слот для шлема](slot__for__helmet.hpp)
- - - использует [слот на голове](slot__for__my__head.hpp)
- - [слот для рюкзака](slot__for__backpuck.hpp)
- - - использует [слот на спине](slot__for__my__back.hpp)
- - [слот для щита на плечах](slot__for__back__shield.hpp)
- - - использует [слот на спине](slot__for__my__back.hpp)
- [ячейки](cell.hpp)
- - [ячейка мышки](cell.hpp)
- - - используется в [интерфейсе](interface.hpp)
- [интерфейс](interface.hpp)
- - - используется когда открыты: [сундук](chest.hpp), [инветарь](inventory.hpp), [рюкзак](backpuck.hpp) ...
- - - использует [ячейку мышки](cell.hpp)
- - - [интерфейс инветаря](interface__inventory.hpp) touch `E` or `I` 
- - - - содержит [интерфейс](interface__essence.hpp)_-моего-_[существа](interface__essence.hpp)
- - - - показывает все надетые предметы
- - - - показывает содержимое надетых сумок
- - - - показывает крафты которое существо знает
- - - - показывает квесты
- - - - показывает статистику существа
- - - [интерфейс сундука](interface__chest.hpp) press `RMB` on [сундук](chest.hpp)
- - - - содержит [интерфейс блока](interface__block.hpp)
- - - - показывает содержимое надетых [карманов](pocket.hpp)
- Прочие обьекты которые мы видим только в [интерфейсе](interface.hpp

