Starships
====================================

## What is it?

A simple game using C++ based off polymorphic and random code. 

## Classes

### Galaxy

There should only be one [Galaxy] in the game, but there's no reason why two can't exist and interact with each other. The [Galaxy] class keeps track of all star [Systems] in the game and how many [Players] there are.

### Player

The first [Player] is always you. Other [Players] may be added in initially or from scripting events. The [Player] class keeps track of how many [Ships] each [Player] has, as well as their [Upgrades] and stats.

### System

Each star [System] consists of a predetermined amount of [Planet] slots (ex: 10) that are randomly filled from a list of [Planet] types. It costs a small amount of fuel to move between [Planets] in the same [System] depending on distance. A fleet must consume a large amount of fuel to jump to a different star [System].

### Planet

[Planets] are automatically created when a [System] is created, and all [Systems] are created when a [Galaxy] is created. [Planets] come in many forms and are beneficial to the [Player] in unique ways. The types of available [Planets] are:

<table>
  <tr>
    <td>#</td>
    <td>Name</td>
    <td>Ore(base)</td>
    <td>Gas(base)</td>
    <td>Rare(base)</td>
    <td>Buildable</td>
    <td>Bonus Effect</td>
  </tr>
  <tr>
    <td>1</td>
    <td>Void Space</td>
    <td>0</td>
    <td>0</td>
    <td>0</td>
    <td>N</td>
    <td><i>Fleet launch -75% fuel use</i></td>
  </tr>
   <tr>
    <td>2</td>
    <td>Small Terrestrial</td>
    <td> 200k</td>
    <td>100k</td>
    <td>25k</td>
    <td>Y</td>
     <td><i>Resource rich</i></td>
  </tr>
   <tr>
    <td>3</td>
    <td>Asteroids</td>
    <td>25k</td>
    <td>10k</td>
    <td>10k</td>
    <td>N</td>
     <td><i>Fleet launch -50% fuel use</i></td>
  </tr>
   <tr>
    <td>4</td>
    <td>Large Terrestrial</td>
    <td>500k</td>
    <td>200k</td>
    <td>100k</td>
    <td>Y</td>
     <td><i>Very resource rich</i></td>
  </tr>
   <tr>
    <td>5</td>
    <td>Ice Planet</td>
    <td>10k</td>
    <td>25k</td>
    <td>0</td>
    <td>Y</td>
     <td><i>Research efficiency bonus for laboratory</i></td>
  </tr>
   <tr>
    <td>6</td>
    <td>Gas Giant</td>
    <td>0</td>
    <td>500k</td>
    <td>0</td>
    <td>N</td>
     <td><i>Very rich in Gas</i></td>
  </tr>
</table>

### additionaltools

Contains miscellaneous functions to assist the program.

**map<int, std::string> planetTypes** is where the [Planet] names are stored.

**rollDie()** Helps randomly generate [Planets] - must be modified when adding or removing more planets types.

**Variation(double baseAmount, double modifer)** takes the base values for a given [Planet] type and increases the amount of resources the [Planet] contains upon [Planet] creation.

## Notes

## Version History

### 0.0.2 Jan 15 2018
Modeling of basic classes and their interactions
