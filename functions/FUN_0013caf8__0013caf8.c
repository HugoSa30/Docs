/*
 * Program: n42.bin
 * Function: FUN_0013caf8
 * Entry: 0013caf8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013caf8(undefined *param_1,byte param_2)

{
  float fVar1;
  undefined4 uVar2;
  ENUM_005b857e EVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  
  do {
    EVar3 = B_zylind;
    bVar6 = 1;
    do {
      if (EVar3 == 0) {
        iVar4 = 3 - (uint)zyl2;
      }
      else {
        iVar4 = 3;
      }
      fVar1 = _DAT_0001bdc8;
      if ((int)(uint)bVar6 <= iVar4) {
        fVar1 = -_ALFOF;
      }
      *(float *)(&UNK_003fd844 + (uint)bVar6 * 4) = fVar1;
      bVar6 = bVar6 + 1;
    } while (bVar6 < 4);
    while( true ) {
      EVar3 = B_zylind;
      param_2 = param_2 + 1;
      if (4 < param_2) {
        bVar6 = 1;
        do {
          EVar3 = B_zylind;
          bVar5 = 1;
          do {
            if (EVar3 == 0) {
              iVar4 = 3 - (uint)zyl2;
            }
            else {
              iVar4 = 3;
            }
            fVar1 = _DAT_0001bdc8;
            if ((int)(uint)bVar5 <= iVar4) {
              fVar1 = _ALFOF;
            }
            *(float *)(&UNK_003fd904 + (uint)bVar5 * 4) = fVar1;
            bVar5 = bVar5 + 1;
          } while (bVar5 < 4);
          while( true ) {
            EVar3 = B_zylind;
            bVar6 = bVar6 + 1;
            if (4 < bVar6) {
              bVar6 = 1;
              do {
                uVar2 = _DAT_0001bdc4;
                bVar5 = 0;
                do {
                  *(undefined4 *)(&UNK_003fd9c4 + (uint)bVar5 * 4) = uVar2;
                  bVar5 = bVar5 + 1;
                } while (bVar5 < 4);
                while( true ) {
                  uVar2 = _DAT_0001bdc4;
                  bVar6 = bVar6 + 1;
                  if (4 < bVar6) {
                    *param_1 = 0;
                    if (DAT_005b857c != '\0') {
                      DAT_005b857c = '\0';
                    }
                    return;
                  }
                  if (bVar6 == 1) break;
                  if (bVar6 == 2) {
                    bVar5 = 0;
                    do {
                      *(undefined4 *)(&UNK_003fd9f4 + (uint)bVar5 * 4) = uVar2;
                      bVar5 = bVar5 + 1;
                    } while (bVar5 < 4);
                  }
                  else if (bVar6 == 3) {
                    bVar5 = 0;
                    do {
                      *(undefined4 *)(&UNK_003fda24 + (uint)bVar5 * 4) = uVar2;
                      bVar5 = bVar5 + 1;
                    } while (bVar5 < 4);
                  }
                  else if (bVar6 == 4) {
                    bVar5 = 0;
                    do {
                      *(undefined4 *)(&UNK_003fda54 + (uint)bVar5 * 4) = uVar2;
                      bVar5 = bVar5 + 1;
                    } while (bVar5 < 4);
                  }
                }
              } while( true );
            }
            if (bVar6 == 1) break;
            if (bVar6 == 2) {
              bVar5 = 1;
              do {
                if (EVar3 == 0) {
                  iVar4 = 3 - (uint)zyl2;
                }
                else {
                  iVar4 = 3;
                }
                fVar1 = _DAT_0001bdc8;
                if ((int)(uint)bVar5 <= iVar4) {
                  fVar1 = _ALFOF;
                }
                *(float *)(&UNK_003fd934 + (uint)bVar5 * 4) = fVar1;
                bVar5 = bVar5 + 1;
              } while (bVar5 < 4);
            }
            else if (bVar6 == 3) {
              bVar5 = 1;
              do {
                if (EVar3 == 0) {
                  iVar4 = 3 - (uint)zyl2;
                }
                else {
                  iVar4 = 3;
                }
                fVar1 = _DAT_0001bdc8;
                if ((int)(uint)bVar5 <= iVar4) {
                  fVar1 = _ALFOF;
                }
                *(float *)(&UNK_003fd964 + (uint)bVar5 * 4) = fVar1;
                bVar5 = bVar5 + 1;
              } while (bVar5 < 4);
            }
            else if (bVar6 == 4) {
              bVar5 = 1;
              do {
                if (EVar3 == 0) {
                  iVar4 = 3 - (uint)zyl2;
                }
                else {
                  iVar4 = 3;
                }
                fVar1 = _DAT_0001bdc8;
                if ((int)(uint)bVar5 <= iVar4) {
                  fVar1 = _ALFOF;
                }
                *(float *)(&UNK_003fd994 + (uint)bVar5 * 4) = fVar1;
                bVar5 = bVar5 + 1;
              } while (bVar5 < 4);
            }
          }
        } while( true );
      }
      if (param_2 == 1) break;
      if (param_2 == 2) {
        bVar6 = 1;
        do {
          if (EVar3 == 0) {
            iVar4 = 3 - (uint)zyl2;
          }
          else {
            iVar4 = 3;
          }
          fVar1 = _DAT_0001bdc8;
          if ((int)(uint)bVar6 <= iVar4) {
            fVar1 = -_ALFOF;
          }
          *(float *)(&UNK_003fd874 + (uint)bVar6 * 4) = fVar1;
          bVar6 = bVar6 + 1;
        } while (bVar6 < 4);
      }
      else if (param_2 == 3) {
        bVar6 = 1;
        do {
          if (EVar3 == 0) {
            iVar4 = 3 - (uint)zyl2;
          }
          else {
            iVar4 = 3;
          }
          fVar1 = _DAT_0001bdc8;
          if ((int)(uint)bVar6 <= iVar4) {
            fVar1 = -_ALFOF;
          }
          *(float *)(&UNK_003fd8a4 + (uint)bVar6 * 4) = fVar1;
          bVar6 = bVar6 + 1;
        } while (bVar6 < 4);
      }
      else if (param_2 == 4) {
        bVar6 = 1;
        do {
          if (EVar3 == 0) {
            iVar4 = 3 - (uint)zyl2;
          }
          else {
            iVar4 = 3;
          }
          fVar1 = _DAT_0001bdc8;
          if ((int)(uint)bVar6 <= iVar4) {
            fVar1 = -_ALFOF;
          }
          *(float *)(&UNK_003fd8d4 + (uint)bVar6 * 4) = fVar1;
          bVar6 = bVar6 + 1;
        } while (bVar6 < 4);
      }
    }
  } while( true );
}

