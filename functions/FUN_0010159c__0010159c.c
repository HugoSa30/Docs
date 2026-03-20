/*
 * Program: n42.bin
 * Function: FUN_0010159c
 * Entry: 0010159c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0010159c(int param_1,byte *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  
  pbVar1 = param_2 + param_1 + -1;
  if ((param_2 < &canbstat) || (&UNK_005bc7ff < pbVar1)) {
    if ((param_2 < &DAT_003f9a30) || ((byte *)0x3fffff < pbVar1)) {
      if ((pbVar1 < (byte *)0x6fff0) ||
         (((byte *)0xefffff < param_2 && (pbVar1 < (byte *)0xffff80)))) {
        if ((pbVar1 < (byte *)0xffe140) || ((byte *)0xffe1ff < param_2)) {
          uVar2 = 3;
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else if (((((&DAT_003fe95c < param_2) && (param_2 < &UNK_003fe977)) ||
              ((&UNK_003fe73f < param_2 && (param_2 < &UNK_003fe8b0)))) ||
             ((&DAT_003fe95c < pbVar1 && (pbVar1 < &UNK_003fe977)))) ||
            ((&UNK_003fe73f < pbVar1 && (pbVar1 < &UNK_003fe8b0)))) {
      uVar2 = 4;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

