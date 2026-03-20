/*
 * Program: n42.bin
 * Function: FUN_000d3688
 * Entry: 000d3688
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d3688(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  Vnsfaktvub = FUN_000a87cc(&KLVNSTVUB,ub);
  Vnsfaktmot = FUN_000a87cc(&KLVNSTMOT,tmot);
  uVar3 = 0;
  do {
    iVar2 = uVar3 * 0x78;
    iVar4 = iVar2 + 0x1f80c;
    uVar1 = **(undefined2 **)(iVar2 + 0x1f81c);
    FUN_000d316c(iVar4);
    FUN_000d2b2c(iVar4);
    FUN_000d2f18(iVar4);
    if (**(char **)(iVar2 + 0x1f850) == '\0') {
      **(byte **)(iVar2 + 0x1f830) = **(byte **)(iVar2 + 0x1f830) & 0xfe;
      **(short **)(iVar2 + 0x1f81c) = (ushort)**(byte **)(iVar2 + 0x1f854) * 100;
    }
    else {
      FUN_000d2e40(iVar4);
      FUN_000d33a8(iVar4);
    }
    FUN_000d2c14(iVar4,uVar1);
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 2);
  FUN_000d3634();
  return;
}

