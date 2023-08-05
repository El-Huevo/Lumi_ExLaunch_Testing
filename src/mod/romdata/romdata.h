#pragma once

// Returns the Max level based on the given level cap index.
uint32_t GetLevelCapData(uint32_t index);

// Returns the list of Pokémon affected by held item form changes.
// Format is <Mons No, Item No, Form No>.
std::vector<std::tuple<int32_t, uint32_t, uint16_t>> GetFormHeldItemMons();

// Returns the list of default forms for Pokémon affected by held item form changes.
// Format is <Mons No, Form No>.
std::vector<std::tuple<int32_t, uint16_t>> GetFormHeldItemMonsDefault();

// Returns the list of Pokémon and held item pairs that can't be separated.
// Format is <Mons No, Item No>.
std::vector<std::tuple<uint16_t, uint16_t>> GetUnbreakablePokeItems();