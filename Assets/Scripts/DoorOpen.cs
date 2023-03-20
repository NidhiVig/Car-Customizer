using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorOpen : MonoBehaviour
{
    public GameObject door;
    public float RotateSpeed = 10.0f;
    private Vector3 left_initial_position = new Vector3(0.00169921247,0.00443667173,-5.80912456e-07);
    private Vector3 left_initial_rotate = new Vector3(-1.72424952e-05,6.39683412e-06,2.89388108);
    private Vector3 left_final_position = new Vector3(-0.263000011,-0.160999998,0.0219999999);
    private Vector3 left_final_rotate = new Vector3(4.3032155,3.49345541,39.1315956);
    
    
    private float flag = 0.0f;
    // Start is called before the first frame update
    void Start()
    {
        flag = 1.0f;
    }
    // Update is called once per frame
    void Update()
    {
        RotateSpeed = SetRSpeed();
        if(flag == 1.0f && door.transform.position != left_initial_position && door.transform.Rotate_position != left_initial_rotate){
            door.transform.Rotate(Vector3((left_final_rotate-left_initial_rotate)/3)*flag, RotateSpeed * time.deltaTime);
            door.transform.Rotate(Vector3((left_final_position-left_initial_position)/3)*flag * RotateSpeed * time.deltaTime);
        }
        if(flag == -1.0f && door.transform.position != left_final_position && door.transform.Rotate_position != left_final_rotate){
            door.transform.Rotate(Vector3((left_final_rotate-left_initial_rotate)/3)*flag, RotateSpeed * time.deltaTime);
            door.transform.Rotate(Vector3((left_final_position-left_initial_position)/3)*flag * RotateSpeed * time.deltaTime);
        }

    }
    public void ToogleDoor(){
        flag *= -1.0f;
    }
}


left_initial_position = Vector3(0.00169921247,0.00443667173,-5.80912456e-07)

left_initial_rotate = Vector3(-1.72424952e-05,6.39683412e-06,2.89388108)

left_final_position = Vector3(-0.263000011,-0.160999998,0.0219999999);
left_final_rotate = Vector3(4.3032155,3.49345541,39.1315956);