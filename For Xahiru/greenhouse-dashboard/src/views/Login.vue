<template>
    <div class="login">
      <h2>Login</h2>
      <form @submit.prevent="handleLogin">
        <input type="text" v-model="username" placeholder="Username" required />
        <input type="password" v-model="password" placeholder="Password" required />
        <button type="submit">Login</button>
      </form>
    </div>
  </template>
  
  <script>
  export default {
    data() {
      return {
        username: '',
        password: ''
      }
    },
    methods: {
      handleLogin() {
        // Simulating login with mock credentials
        if (this.username === 'user' && this.password === 'password') {
          localStorage.setItem('authToken', '123456');
          this.$router.push('/dashboard');
        } else {
          alert('Invalid credentials');
        }
      }
    }
  }
  </script>
  
  <style scoped>
  .login {
    max-width: 400px;
    margin: 0 auto;
  }
  </style>  