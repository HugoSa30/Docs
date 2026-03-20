/*
 * Program: n42.bin
 * Function: FUN_0013c924
 * Entry: 0013c924
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013c924(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  
  B_fofr = 0;
  B_fofr1 = 0;
  B_fofr2 = 0;
  B_fofr3 = 0;
  B_fofr4 = 0;
  B_fofdr = 0;
  DAT_003fa9b0 = 0;
  fofstat = 2;
  _DAT_003fa9ba = 0;
  _fofresz = 0;
  anwfofs = _ANWFOST;
  _DAT_003fa9a8 = _ANWFOST;
  anwst = _ANWSTP;
  _DAT_003fa9be = _ANWSTP;
  B_fofrun = 0;
  B_fofrun0 = 0;
  bVar3 = 1;
  do {
    uVar1 = _DAT_0001bdc4;
    bVar2 = 0;
    do {
      *(undefined4 *)(&UNK_003fda84 + (uint)bVar2 * 4) = uVar1;
      bVar2 = bVar2 + 1;
    } while (bVar2 < 4);
    while( true ) {
      uVar1 = _DAT_0001bdc4;
      bVar3 = bVar3 + 1;
      if (4 < bVar3) {
        FUN_0013caf8(param_1 + -0x7341,1);
        return;
      }
      if (bVar3 == 1) break;
      if (bVar3 == 2) {
        bVar2 = 0;
        do {
          *(undefined4 *)(&UNK_003fdab4 + (uint)bVar2 * 4) = uVar1;
          bVar2 = bVar2 + 1;
        } while (bVar2 < 4);
      }
      else if (bVar3 == 3) {
        bVar2 = 0;
        do {
          *(undefined4 *)(&UNK_003fdae4 + (uint)bVar2 * 4) = uVar1;
          bVar2 = bVar2 + 1;
        } while (bVar2 < 4);
      }
      else if (bVar3 == 4) {
        bVar2 = 0;
        do {
          *(undefined4 *)(&UNK_003fdb14 + (uint)bVar2 * 4) = uVar1;
          bVar2 = bVar2 + 1;
        } while (bVar2 < 4);
      }
    }
  } while( true );
}

