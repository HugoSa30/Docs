/*
 * Program: n42.bin
 * Function: FUN_00120dfc
 * Entry: 00120dfc
 * Exported by: ExportAllDecompiledFunctions.java
 */


char FUN_00120dfc(byte param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = '\0';
  bVar2 = 0;
  do {
    if (0x7f < param_1) {
      cVar1 = cVar1 + '\x01';
    }
    param_1 = param_1 * '\x02';
    bVar2 = bVar2 + 1;
  } while (bVar2 < 8);
  return cVar1;
}

