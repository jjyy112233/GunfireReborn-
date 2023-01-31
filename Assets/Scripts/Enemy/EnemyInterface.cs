using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface EnemyInterface 
{
    //공격의 끝. 다시 추적
    public void AttackEnd();

    //공격 받을때
    public void Hit(PlayerController target, bool stop);
    //공격 받기 끝나고 나서. 무적처리 하거나, 멈추기
    public void HitEnd();

    public void Die();

}
