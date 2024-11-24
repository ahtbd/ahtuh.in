<template>
    <div class="home">
      <h1>Welcome to the Greenhouse Dashboard</h1>
      <router-link to="/login">Login</router-link> | 
      <router-link to="/register">Sign Up</router-link>
    </div>
  </template>
  
  <script>
  export default {
    name: 'Home'
  }
  </script>
  
  <style scoped>
  .home {
    text-align: center;
    margin-top: 50px;
  }
  </style>  