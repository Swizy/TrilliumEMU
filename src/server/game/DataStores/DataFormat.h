/*
 * Copyright (C) 2011 TrilliumEMU <http://www.trilliumemu.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TRILLIUM_DATAFORMAT_H
#define TRILLIUM_DATAFORMAT_H

const char Achievementfmt[]="niixsxiixixxii";
//const std::string CustomAchievementfmt="ppppppppppppppp";
//const std::string CustomAchievementIndex = "ID";
const char AchievementCriteriafmt[]="niiiiiiiisiiiiixxxxxxxx";
const char AreaTableEntryfmt[]="iiinixxxxxisixxxxxxxxxxxxx";
const char AreaGroupEntryfmt[]="niiiiiii";
const char AreaPOIEntryfmt[]="niiiiiiiiiiiffixixxixx";
const char AreaTriggerEntryfmt[]="nifffxxxfffff";
const char ArmorLocationfmt[]="nfffff";
const char AuctionHouseEntryfmt[]="niiix";
const char BankBagSlotPricesEntryfmt[]="ni";
const char BarberShopStyleEntryfmt[]="nixxxiii";
const char BattlemasterListEntryfmt[]="niiiiiiiiixsiiiixxxx";
const char CharStartOutfitEntryfmt[]="diiiiiiiiiiiiiiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char CharTitlesEntryfmt[]="nxsxix";
const char ChatChannelsEntryfmt[]="nixsx";
const char ChrClassesEntryfmt[]="nixsxxxixiixxx";
const char ChrRacesEntryfmt[]="nxixiixixxxxixsxxxxxixxx";
const char CinematicSequencesEntryfmt[]="nxxxxxxxxx";
const char CreatureDisplayInfofmt[]="nxxxfxxxxxxxxxxxx";
const char CreatureFamilyfmt[]="nfifiiiiixsx";
const char CreatureSpellDatafmt[]="niiiixxxx";
const char CreatureTypefmt[]="nxx";
const char CurrencyTypesfmt[]="nxxxxxxiixx";
const char DestructibleModelDatafmt[]="ixxixxxixxxixxxixxxxxxxx";
const char DungeonEncounterfmt[]="iiixisxx";
const char DurabilityCostsfmt[]="niiiiiiiiiiiiiiiiiiiiiiiiiiiii";
const char DurabilityQualityfmt[]="nf";
const char EmotesEntryfmt[]="nxxiiixx";
const char EmotesTextEntryfmt[]="nxixxxxxxxxxxxxxxxx";
const char FactionEntryfmt[]="niiiiiiiiiiiiiiiiiiffixsxx";
const char FactionTemplateEntryfmt[]="niiiiiiiiiiiii";
const char GameObjectDisplayInfofmt[]="nxxxxxxxxxxxffffffxxx";
const char GemPropertiesEntryfmt[]="nixxix";
const char GlyphPropertiesfmt[]="niii";
const char GlyphSlotfmt[]="nii";
const char GtBarberShopCostBasefmt[]="xf";
const char GtCombatRatingsfmt[]="xf";
const char GtChanceToMeleeCritBasefmt[]="xf";
const char GtChanceToMeleeCritfmt[]="xf";
const char GtChanceToSpellCritBasefmt[]="xf";
const char GtChanceToSpellCritfmt[]="xf";
const char GtOCTClassCombatRatingScalarfmt[]="df";
//const char GtOCTRegenHPfmt[]="f";
const char GtOCTRegenMPfmt[]="f";
//const char GtRegenHPPerSptfmt[]="xf";
const char gtOCTHpPerStaminafmt[]="xf";
const char GtRegenMPPerSptfmt[]="xf";
const char GtSpellScalingfmt[]="nf";
const char Holidaysfmt[]="nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char ItemArmorQualityfmt[]="nfffffffi";
const char ItemArmorShieldfmt[]="nifffffff";
const char ItemArmorTotalfmt[]="niffff";
const char ItemBagFamilyfmt[]="nx";
//const char ItemDisplayTemplateEntryfmt[]="nxxxxxxxxxxixxxxxxxxxxx";
//const char ItemCondExtCostsEntryfmt[]="xiii";
const char ItemDamagefmt[]="nfffffffi";
const char ItemLimitCategoryEntryfmt[]="nxii";
const char ItemRandomPropertiesfmt[]="nxiiixxs";
const char ItemRandomSuffixfmt[]="nsxiiiiiiiiii";
const char ItemSetEntryfmt[]="dsiiiiiiiiiixxxxxxxiiiiiiiiiiiiiiiiii";
const char LFGDungeonEntryfmt[]="nxiiiiiiixixxixixx";
const char LockEntryfmt[]="niiiiiiiiiiiiiiiiiiiiiiiixxxxxxxx";
const char MailTemplateEntryfmt[]="nxs";
const char MapEntryfmt[]="nxixxxsixxixiffxiixx";
const char MapDifficultyEntryfmt[]="diisiix";
const char MountCapabilityfmt[]="niixxiii";
const char MountTypefmt[]="niiiiiiiiiiiiiiiiixxxxxxx";
const char MovieEntryfmt[]="nxxx";
const char OverrideSpellDatafmt[]="niiiiiiiiiixx";
const char QuestSortEntryfmt[]="nx";
const char QuestXPfmt[]="niiiiiiiiii";
const char QuestFactionRewardfmt[]="niiiiiiiiii";
const char PvPDifficultyfmt[]="diiiii";
const char RandomPropertiesPointsfmt[]="niiiiiiiiiiiiiii";
const char ScalingStatDistributionfmt[]="niiiiiiiiiiiiiiiiiiiixi";
const char ScalingStatValuesfmt[]="iniiiiiiiiiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxx";
const char SkillLinefmt[]="nisxixi";
const char SkillLineAbilityfmt[]="niiiixxiiiiixx";
const char SoundEntriesfmt[]="nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char SpellCastTimefmt[]="nixx";
const char SpellDifficultyfmt[]="niiii";
const std::string CustomSpellDifficultyfmt="ppppp";
const std::string CustomSpellDifficultyIndex="Id";
const char SpellDurationfmt[]="niii";
const char SpellEntryfmt[]="niiiiiiiixxxiiiifiiiissxxiixxixiiiiiiixiiiiiiiix";
const std::string CustomSpellEntryfmt="pppppppppaapppppppppaaaappaapapppppppappppppppa";
const std::string CustomSpellEntryIndex = "Id";
const char SpellAuraOptionsEntryfmt[]="niiii";
const char SpellAuraRestrictionsEntryfmt[]="diiiiiiii";
const char SpellCastingRequirementsEntryfmt[]="dixxixi";
const char SpellCategoriesEntryfmt[]="diiiiii";
const char SpellClassOptionsEntryfmt[]="dxiiiix";
const char SpellCooldownsEntryfmt[]="diii";
const char SpellEffectEntryfmt[]="difiiixfiiiiiifixfiiiiiiiix";
const char SpellEquippedItemsEntryfmt[]="diii";
const char SpellInterruptsEntryfmt[]="dixixi";
const char SpellLevelsEntryfmt[]="diii";
const char SpellPowerEntryfmt[]="diiiixx";
const char SpellReagentsEntryfmt[]="diiiiiiiiiiiiiiii";
const char SpellScalingEntryfmt[]="diiiiffffffffffi";
const char SpellShapeshiftEntryfmt[]="nixixx";
const char SpellTargetRestrictionsEntryfmt[]="dxiiii";
const char SpellTotemsEntryfmt[]="xiiii";
const char SpellFocusObjectfmt[]="nx";
const char SpellItemEnchantmentfmt[]="nxiiiiiixxxiiisiiiiiiix";
const char SpellItemEnchantmentConditionfmt[]="nbbbbbxxxxxbbbbbbbbbbiiiiiXXXXX";
const char SpellRadiusfmt[]="nfxf";
const char SpellRangefmt[]="nffffixx";
const char SpellRuneCostfmt[]="niiii";
const char SpellShapeshiftFormfmt[]="nxxiixiiixxiiiiiiiixx";
//const char StableSlotPricesfmt[] = "ni"; // removed
const char SummonPropertiesfmt[] = "niiiii";
const char TalentEntryfmt[]="niiiiiiiiixxixxxxxx";
const char TalentTabEntryfmt[]="nxxiiixxxxx";
const char TaxiNodesEntryfmt[]="nifffsiixxx";
const char TaxiPathEntryfmt[]="niii";
const char TaxiPathNodeEntryfmt[]="diiifffiiii";
const char TotemCategoryEntryfmt[]="nxii";
const char VehicleEntryfmt[]="niffffiiiiiiiifffffffffffffffssssfifiixx";
const char VehicleSeatEntryfmt[]="niiffffffffffiiiiiifffffffiiifffiiiiiiiffiiiiixxxxxxxxxxxxxxxxxxxx";
const char WMOAreaTableEntryfmt[]="niiixxxxxiixxxx";
const char WorldMapAreaEntryfmt[]="xinxffffixxx";
const char WorldMapOverlayEntryfmt[]="nxiiiixxxxxxxxx";
const char WorldSafeLocsEntryfmt[]="nifffx";
const char PhaseEntryfmt[]="nsi";

//DB2 Files
const char Itemfmt[]="niiiiiii";
const char ItemExtendedCostEntryfmt[]="nxxiiiiiiiiiiiixiiiiiiiiiixxxxx";
#endif
