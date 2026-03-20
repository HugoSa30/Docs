/*
 * Program: n42.bin
 * Function: read_sensors
 * Entry: 0011006c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void read_sensors(void)

{
  if ((raster_um & 3) == 0) {
    FUN_00110184();
    FUN_00110400();
    FUN_00111e40();
    FUN_0011225c();
    FUN_00114758();
    FUN_00112bf0();
    FUN_00114268();
    FUN_00110828();
    FUN_001111f0();
    FUN_00114174();
    FUN_00115a24();
  }
  if ((raster_um & 3) == 2) {
    FUN_00111000();
    FUN_00111b8c();
    FUN_00111868();
    FUN_00111614();
    FUN_00112680();
    FUN_00115180();
    FUN_00115a24();
  }
  if ((raster_um & 3) == 1) {
    FUN_00114c5c();
    FUN_00114df8();
    FUN_00115a24();
  }
  if ((raster_um & 3) == 3) {
    FUN_00115a24();
    func_0xff254f58();
    FUN_00115fa0();
    FUN_0011629c();
    FUN_00116e14();
    FUN_001160e4();
    FUN_00116978();
    FUN_00116798();
    FUN_00116614();
    FUN_00116b78();
    FUN_00116e78();
  }
  raster_um = raster_um + 1;
  return;
}

