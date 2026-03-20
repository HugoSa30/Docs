/*
 * Program: n42.bin
 * Function: FUN_00095740
 * Entry: 00095740
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00095740(int param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == '\x01') {
    return 1;
  }
  if (cVar1 == '\x02') {
    if (*(char *)(param_1 + 2) == LAB_001c0040) {
      return 1;
    }
  }
  else if (cVar1 == '\x03') {
    if ((LAB_001c004c == *(char *)(param_1 + 2)) && ((_DAT_003f9f28 & 1) != 0)) {
      return 1;
    }
    if ((LAB_001c0058 == *(char *)(param_1 + 2)) && ((_DAT_003f9f28 & 1) != 0)) {
      *(undefined *)(param_1 + 6) = 5;
      return 1;
    }
  }
  else if ((((cVar1 == '\x04') && (*(char *)(param_1 + 2) == DAT_001c0304)) &&
           ((_DAT_003f9f28 & 1) != 0)) &&
          ((uVar2 = (uint)*(byte *)(_DAT_003f9f64 + 4), uVar2 != 0 && (uVar2 <= DAT_001c0306)))) {
    *(byte *)(param_1 + 1) = (&DAT_001c0306)[uVar2];
    return 1;
  }
  return 0;
}

