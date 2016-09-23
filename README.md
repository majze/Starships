# Starships
C++ Game using ADTs

## Console phase:
* Create player and ship databases
* Create working combat rounds
* Extend combat to fleet-sized battles

## Window phase:
* Draft icons
* Implement GUI
* configure game i/o

### About
Starships is the codename of a simple fleet-based combat simulator. There are no graphics or animations planned. Ships can be divided into many categories, but they all share common traits: Health, Attack, Shields, and Cost.

At the start of each round, ships randomly choose a target to attack. When attacking or defending, both party's ships deal damage and take damage. However, if a ship has shields, no matter how powerful the attack, the defending ship's health won't be touched until the shields are comepletely breached. Here's an example:

#### [Ship A][10 HP][20 ATK][0 SHLD] ---(attacks)---> [Ship B][5 HP][10 ATK][10 SHLD]
In the above case, Ship B would win. First, Ship A would attack since he's the aggressor. Despite Ship A's attack value being higher than Ship B's health value, Ship B's shields negate all damage from the first attack. This is known as "popping" the shield - no hull damage can be taken until this occurs. Then Ship B returns fire, dealing exactly 10 damage to Ship A's 10 health, which destroys it.
