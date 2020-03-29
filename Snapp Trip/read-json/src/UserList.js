import React from "react";
import UserItem from "./UserItem";
import AverageAge from "./AverageAge";
import users from "./users.json";

const UserList = () => {
  let userRole = users.filter(item => item.role == "user");
  let sum = 0,
    num = 0,
    ave;
  users.map(item => {
    if (item.role == "admin") {
      sum += item.age;
      num++;
    }
  });
  ave = sum / num;
  return (
    <div>
      {userRole.map(user => {
        return <UserItem name={user.name} key={user.name} />;
      })}
      {<AverageAge average={ave} />}
    </div>
  );
};

export default UserList;
