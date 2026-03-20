/*
 * Program: n42.bin
 * Function: FUN_00141c00
 * Entry: 00141c00
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00141c00(void)

{
  if (B_llrein != '\0') {
    func_0xff221cc0(&DAT_003fb4d1);
    func_0xff221cc0(&DAT_003fb4d0);
  }
  DAT_003fb4d4 = func_0xff221f18(&UNK_003fb4d5,B_vl,DAT_001cb303);
  if ((DAT_001cb305 < vfzg) || (DAT_003fb4d4 == '\0')) {
    DAT_003fb4d3 = '\0';
  }
  else if ((B_vl != 0) && (vfzg < DAT_001cb304)) {
    DAT_003fb4d3 = '\x01';
  }
  DAT_003fb4d8 = DAT_003fb4d3 != DAT_003fb4d7;
  DAT_003fb4d7 = DAT_003fb4d3;
  if (((bool)DAT_003fb4d8) && (DAT_003fb4d6 = DAT_001cb2fe, DAT_003fb4d3 == '\0')) {
    DAT_003fb4d6 = '\0';
  }
  func_0xff221cc0(&DAT_003fb4d6);
  B_genoffvl = 1 - (DAT_003fb4d6 == '\0');
  return;
}

