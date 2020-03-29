import React, { useState, useEffect } from "react";

export function useTimer() {
  const [seconds, setSeconds] = useState(0);
  const [isActive, setIsActive] = useState(true);

  function stop() {
    setIsActive(false);
  }
  function resume() {
    setIsActive(true);
  }
  function reset() {
    setSeconds(0);
    setIsActive(true);
  }

  useEffect(() => {
    let interval = null;
    if (isActive) {
      interval = setInterval(() => {
        setSeconds(seconds => seconds + 1);
      }, 1000);
    } else if (!isActive && seconds !== 0) {
      clearInterval(interval);
    }
    return () => clearInterval(interval);
  }, [isActive, seconds]);

  return { seconds, resume, stop, reset };
}
