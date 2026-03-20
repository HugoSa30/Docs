/*
 * Program: n42.bin
 * Function: FUN_001a17d8
 * Entry: 001a17d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001a17d8(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = (byte *)(param_1 + 0x1c);
    bVar2 = 0;
    do {
      bVar1 = *pbVar3;
      if (bVar1 <= bVar2) {
        return 0;
      }
      pbVar3 = pbVar3 + 1;
      bVar2 = bVar1;
    } while (pbVar3 < (byte *)(param_1 + param_2 + 0x1c));
  }
  return 1;
}

