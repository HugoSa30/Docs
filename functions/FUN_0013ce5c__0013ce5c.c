/*
 * Program: n42.bin
 * Function: FUN_0013ce5c
 * Entry: 0013ce5c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013ce5c(undefined *param_1,byte param_2,undefined *param_3,undefined4 param_4,byte param_5
                 ,uint param_6)

{
  undefined4 uVar1;
  ENUM_005b857e EVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  undefined *in_r12;
  
  do {
    iVar3 = 3 - (uint)(byte)in_r12[-0x7a79];
    while( true ) {
      uVar1 = _DAT_0001bdc8;
      if ((int)(uint)param_5 <= iVar3) {
        uVar1 = _ALFOF;
      }
      *(undefined4 *)(param_3 + (uint)param_5 * 4) = uVar1;
      param_5 = param_5 + 1;
      if (3 < param_5) {
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                EVar2 = B_zylind;
                param_2 = param_2 + 1;
                if (4 < param_2) {
                  bVar4 = 1;
                  do {
                    uVar1 = _DAT_0001bdc4;
                    bVar5 = 0;
                    do {
                      *(undefined4 *)(&UNK_003fd9c4 + (uint)bVar5 * 4) = uVar1;
                      bVar5 = bVar5 + 1;
                    } while (bVar5 < 4);
                    while( true ) {
                      uVar1 = _DAT_0001bdc4;
                      bVar4 = bVar4 + 1;
                      if (4 < bVar4) {
                        *param_1 = 0;
                        if (DAT_005b857c != '\0') {
                          DAT_005b857c = '\0';
                        }
                        return;
                      }
                      if (bVar4 == 1) break;
                      if (bVar4 == 2) {
                        bVar5 = 0;
                        do {
                          *(undefined4 *)(&UNK_003fd9f4 + (uint)bVar5 * 4) = uVar1;
                          bVar5 = bVar5 + 1;
                        } while (bVar5 < 4);
                      }
                      else if (bVar4 == 3) {
                        bVar5 = 0;
                        do {
                          *(undefined4 *)(&UNK_003fda24 + (uint)bVar5 * 4) = uVar1;
                          bVar5 = bVar5 + 1;
                        } while (bVar5 < 4);
                      }
                      else if (bVar4 == 4) {
                        bVar5 = 0;
                        do {
                          *(undefined4 *)(&UNK_003fda54 + (uint)bVar5 * 4) = uVar1;
                          bVar5 = bVar5 + 1;
                        } while (bVar5 < 4);
                      }
                    }
                  } while( true );
                }
                if (param_2 != 1) break;
                bVar4 = 1;
                do {
                  if (EVar2 == 0) {
                    iVar3 = 3 - (uint)zyl2;
                  }
                  else {
                    iVar3 = 3;
                  }
                  uVar1 = _DAT_0001bdc8;
                  if ((int)(uint)bVar4 <= iVar3) {
                    uVar1 = _ALFOF;
                  }
                  *(undefined4 *)(&UNK_003fd904 + (uint)bVar4 * 4) = uVar1;
                  bVar4 = bVar4 + 1;
                } while (bVar4 < 4);
              }
              if (param_2 != 2) break;
              bVar4 = 1;
              do {
                if (EVar2 == 0) {
                  iVar3 = 3 - (uint)zyl2;
                }
                else {
                  iVar3 = 3;
                }
                uVar1 = _DAT_0001bdc8;
                if ((int)(uint)bVar4 <= iVar3) {
                  uVar1 = _ALFOF;
                }
                *(undefined4 *)(&UNK_003fd934 + (uint)bVar4 * 4) = uVar1;
                bVar4 = bVar4 + 1;
              } while (bVar4 < 4);
            }
            if (param_2 != 3) break;
            bVar4 = 1;
            do {
              if (EVar2 == 0) {
                iVar3 = 3 - (uint)zyl2;
              }
              else {
                iVar3 = 3;
              }
              uVar1 = _DAT_0001bdc8;
              if ((int)(uint)bVar4 <= iVar3) {
                uVar1 = _ALFOF;
              }
              *(undefined4 *)(&UNK_003fd964 + (uint)bVar4 * 4) = uVar1;
              bVar4 = bVar4 + 1;
            } while (bVar4 < 4);
          }
        } while (param_2 != 4);
        param_5 = 1;
        param_3 = &UNK_003fd994;
        param_6 = (uint)B_zylind;
      }
      if (param_6 == 0) break;
      iVar3 = 3;
    }
    in_r12 = &DAT_005c0000;
  } while( true );
}

