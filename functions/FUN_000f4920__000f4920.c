/*
 * Program: n42.bin
 * Function: FUN_000f4920
 * Entry: 000f4920
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f4920(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    if (param_2 == 1) {
      *(ushort *)(_DAT_003fc2e4 + 4) =
           *(ushort *)(_DAT_003fc2e4 + 4) & 0x80ff | (ushort)(param_1 << 8) & 0x7f00;
      DAT_003fc34a = (char)param_1;
    }
    else {
      *(ushort *)(_DAT_003fc2e4 + 6) =
           *(ushort *)(_DAT_003fc2e4 + 6) & 0x80ff | (ushort)(param_1 << 8) & 0x7f00;
      DAT_003fc34b = (char)param_1;
    }
  }
  else if (param_2 == 1) {
    *(ushort *)(_DAT_003fc2f0 + 4) =
         *(ushort *)(_DAT_003fc2f0 + 4) & 0x80ff | (ushort)(param_1 << 8) & 0x7f00;
  }
  else {
    *(ushort *)(_DAT_003fc2f0 + 6) =
         *(ushort *)(_DAT_003fc2f0 + 6) & 0x80ff | (ushort)(param_1 << 8) & 0x7f00;
  }
  return 1;
}

