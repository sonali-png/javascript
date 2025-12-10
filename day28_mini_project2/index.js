const changeThemeButton = document.querySelector("#toggleBtn");
const wrapper = document.querySelector(".wrapper");

let darkMode = localStorage.getItem("themePreference") === "true";

function changeTheme() {
  if (darkMode) {
    wrapper.classList.add("dark");
    changeThemeButton.innerHTML = '<i class="fa-solid fa-sun sun"></i>';
  } else {
    wrapper.classList.remove("dark");
    changeThemeButton.innerHTML = '<i class="fa-solid fa-moon moon"></i>';
  }
}

changeThemeButton.addEventListener("click", () => {
  darkMode = !darkMode; // false
  localStorage.setItem("themePreference", darkMode);
  changeTheme();
});

changeTheme();
