/*
 * Program: n42.bin
 * Function: FUN_0011dd10
 * Entry: 0011dd10
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011dd10(undefined4 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (*(ushort *)((int)param_2 + 6) < 3) {
    *(undefined *)*param_2 = 0x10;
  }
  else {
    puVar3 = (undefined *)*param_2;
    uVar2 = (uint)*(byte *)(param_2 + 3) * 0x100 + (uint)(byte)puVar3[1];
    if ((((uVar2 & 0xffff) != 0x3000) || ((top_w < 0x65 && (nmot_w == 0)))) &&
       (((uVar2 & 0xffff) != 0x3100 || (nmot_w == 0)))) {
      uVar1 = uVar2 & 0xffff;
      if ((((uVar1 != 0x1000) && (uVar1 != 0x3000)) && (uVar1 != 0x3100)) && (uVar1 != 0x3fff)) {
        *puVar3 = 0x12;
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
        return;
      }
      if (_DAT_003f9b70 == 1) {
        if (DAT_003fb2ac == '\x02') {
          _DAT_003f9b70 = 0;
          *puVar3 = (char)(uVar2 >> 8);
          *(char *)(*param_2 + 1) = (char)uVar2;
          *(undefined2 *)(param_2 + 2) = 2;
          *(undefined *)((int)param_2 + 10) = 1;
          return;
        }
        if (DAT_003fb2ac == '\x01') {
          *puVar3 = 0x78;
          *(undefined2 *)(param_2 + 2) = 1;
          *(undefined *)((int)param_2 + 10) = 8;
          return;
        }
        _DAT_003f9b70 = 0;
        *puVar3 = 0x10;
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
        return;
      }
      uVar2 = uVar2 & 0xffff;
      if (uVar2 == 0x1000) {
        uVar2 = 0;
        puVar3 = (undefined *)0x1c0216;
        do {
          *(undefined *)(*param_2 + uVar2 + 5) = puVar3[1];
          puVar3 = puVar3 + 2;
          *(undefined *)(*param_2 + uVar2 + 6) = *puVar3;
          uVar2 = uVar2 + 2;
        } while (uVar2 < 10);
        func_0xff2102d0(9,4,0xd,0,*param_2 + 2,&UNK_003fb2a4);
      }
      else if (uVar2 == 0x3000) {
        func_0xff2102d0(9,3,1,0,puVar3 + 2,&UNK_003fb2a4);
      }
      else if (uVar2 == 0x3100) {
        func_0xff2102d0(9,2,1,0,puVar3 + 2,&UNK_003fb2a4);
      }
      else if (uVar2 == 0x3fff) {
        func_0xff2102d0(9,0x18,2,0,puVar3 + 2,&UNK_003fb2a4);
      }
      else {
        DAT_003fb2ac = -0x80;
      }
      if (DAT_003fb2ac == '\x01') {
        _DAT_003f9b70 = 1;
        *(undefined *)*param_2 = 0x78;
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 8;
        return;
      }
      _DAT_003f9b70 = 0;
      *(undefined *)*param_2 = 0x10;
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 2;
      return;
    }
    *puVar3 = 0x22;
  }
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
  return;
}

