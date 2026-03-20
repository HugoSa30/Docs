/*
 * Program: n42.bin
 * Function: FUN_0011e00c
 * Entry: 0011e00c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011e00c(undefined4 param_1,char **param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  if (*(short *)((int)param_2 + 6) == 0) {
    **param_2 = '\x10';
  }
  else {
    cVar1 = *(char *)(param_2 + 3);
    if ((cVar1 == -0x70) || (cVar1 == -0x3f)) {
      if (_DAT_003f9b74 != 1) {
        if (cVar1 == -0x70) {
          uVar3 = 0;
          pcVar2 = (char *)0x1c0216;
          do {
            (*param_2)[uVar3 + 0xb] = (*param_2)[uVar3 + 1];
            pcVar2 = pcVar2 + 1;
            (*param_2)[uVar3 + 1] = *pcVar2;
            uVar3 = uVar3 + 1;
          } while (uVar3 < 10);
          func_0xff2102d0(9,7,0x11,0,*param_2 + 1,&UNK_003fb2b0);
        }
        else if (cVar1 == -0x3f) {
          DAT_003fb2bc = (*param_2)[1];
          func_0xff2102d0(4,0x18,1,0,&DAT_003fb2bc,&UNK_003fb2b0);
          kva_korr = DAT_003fe7d5;
        }
        else {
          DAT_003fb2b8 = -0x80;
        }
        if (DAT_003fb2b8 == '\x01') {
          _DAT_003f9b74 = 1;
          **param_2 = 'x';
          *(undefined2 *)(param_2 + 2) = 1;
          *(undefined *)((int)param_2 + 10) = 8;
          return;
        }
        _DAT_003f9b74 = 0;
        **param_2 = '\x10';
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
        return;
      }
      if (DAT_003fb2b8 == '\x02') {
        _DAT_003f9b74 = 0;
        **param_2 = cVar1;
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 1;
        return;
      }
      if (DAT_003fb2b8 == '\x01') {
        **param_2 = 'x';
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 8;
        return;
      }
      _DAT_003f9b74 = 0;
      **param_2 = '\x10';
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 2;
      return;
    }
    **param_2 = '\x12';
  }
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
                    /* WARNING: Read-only address (ram,0x003fe7d5) is written */
  return;
}

